const target = document.querySelectorAll('.container');

function handleIntersection(entries) {
    entries.map((entry) => {
        if (entry.isIntersecting) {
            entry.target.classList.add('visible')
            console.log(entry)
        } else {
            entry.target.classList.remove('visible')
        }
    });
}

const observer = new IntersectionObserver(handleIntersection);

for (let index = 0; index < target.length; index++) {
    const element = target[index];
    observer.observe(element);
}