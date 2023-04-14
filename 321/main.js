// Get all news items
const newsItems = document.querySelectorAll('.news-item');

// Loop through news items
newsItems.forEach(newsItem => {
  // Get links div
  const linksDiv = newsItem.querySelector('.links');
  
  // Hide links div by default
  linksDiv.style.display = 'none';
  
  // Add mouseover event listener to news item
  newsItem.addEventListener('mouseover', () => {
    // Show links div
    linksDiv.style.display = 'flex';
  });
  
  // Add mouseout event listener to news item
  newsItem.addEventListener('mouseout', () => {
    // Hide links div
    linksDiv.style.display = 'none';
  });
});