
%-------------------------
% Resume in Latex
% Author : Jake Gutierrez
% Based off of: https://github.com/sb2nov/resume
% License : MIT
%------------------------

\documentclass[letterpaper,11pt]{article}

\usepackage{latexsym}
\usepackage[empty]{fullpage}
\usepackage{titlesec}
\usepackage{marvosym}
\usepackage[usenames,dvipsnames]{color}
\usepackage{verbatim}
\usepackage{enumitem}
\usepackage[hidelinks]{hyperref}
\usepackage{fancyhdr}
\usepackage[english]{babel}
\usepackage{tabularx}
\usepackage{fontawesome}
\usepackage{xcolor}

\input{glyphtounicode}


%----------FONT OPTIONS----------
% sans-serif
% \usepackage[sfdefault]{FiraSans}
% \usepackage[sfdefault]{roboto}
% \usepackage[sfdefault]{noto-sans}
% \usepackage[default]{sourcesanspro}

% serif
% \usepackage{CormorantGaramond}
% \usepackage{charter}

 \setlength{\tabcolsep}{1pt}
\pagestyle{fancy}
\fancyhf{} % clear all header and footer fields
\fancyfoot{}
\renewcommand{\headrulewidth}{0pt}
\renewcommand{\footrulewidth}{0pt}

% Adjust margins
\addtolength{\oddsidemargin}{-0.5in}
\addtolength{\evensidemargin}{-0.5in}
\addtolength{\textwidth}{1in}
\addtolength{\topmargin}{-.5in}
\addtolength{\textheight}{1.0in}

\urlstyle{same}

\raggedbottom
\raggedright
\setlength{\tabcolsep}{0in}

% Sections formatting
\titleformat{\section}{
  \vspace{-4pt}\scshape\raggedright\large
}{}{0em}{}[\color{black}\titlerule \vspace{-5pt}]

% Ensure that generate pdf is machine readable/ATS parsable
\pdfgentounicode=1

%-------------------------
% Custom commands
\newcommand{\resumeItem}[1]{
  \item\small{
    {#1 \vspace{-2pt}}
  }
}

\newcommand{\resumeSubheading}[4]{
  \vspace{-2pt}\item
    \begin{tabular*}{0.97\textwidth}[t]{l@{\extracolsep{\fill}}r}
      \textbf{#1} & #2 \\
      \textit{\small#3} & \textit{\small #4} \\
    \end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeSubSubheading}[2]{
    \item
    \begin{tabular*}{0.97\textwidth}{l@{\extracolsep{\fill}}r}
      \textit{\small#1} & \textit{\small #2} \\
    \end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeProjectHeading}[2]{
    \item
    \begin{tabular*}{0.97\textwidth}{l@{\extracolsep{\fill}}r}
      \small#1 & #2 \\
    \end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeSubItem}[1]{\resumeItem{#1}\vspace{-4pt}}

\renewcommand\labelitemii{$\vcenter{\hbox{\tiny$\bullet$}}$}

\newcommand{\resumeSubHeadingListStart}{\begin{itemize}[leftmargin=0.15in, label={}]}
\newcommand{\resumeSubHeadingListEnd}{\end{itemize}}
\newcommand{\resumeItemListStart}{\begin{itemize}}
\newcommand{\resumeItemListEnd}{\end{itemize}\vspace{-5pt}}

%-------------------------------------------
%%%%%%  RESUME STARTS HERE  %%%%%%%%%%%%%%%%%%%%%%%%%%%%


\begin{document}

%----------HEADING----------
% \begin{tabular*}{\textwidth}{l@{\extracolsep{\fill}}r}
%   \textbf{\href{http://sourabhbajaj.com/}{\Large Sourabh Bajaj}} & Email : \href{mailto:sourabh@sourabhbajaj.com}{sourabh@sourabhbajaj.com}\\
%   \href{http://sourabhbajaj.com/}{http://www.sourabhbajaj.com} & Mobile : +1-123-456-7890 \\
% \end{tabular*}

\begin{center}
    \textbf{\Huge \scshape Harsh  Raj} \\ \vspace{1pt}
    \small (+91)9661526862 \faPhone $|$ \href{mailto:harshraj211430@gmail.com}{\underline{harshraj211430@gmail.com  \faEnvelope}} $|$ 
    \href{https://in.linkedin.com/in/harsh-raj-15321624a
}{ \underline{LinkedIn \faLinkedin}} $|$
    \href{https://github.com/harshraj6582}{  \underline{GitHub \faGithub}}
\end{center}


%-----------EDUCATION-----------
\section{EDUCATION}
  \resumeSubHeadingListStart
    \resumeSubheading
      {Jaypee University of Information Technology}{Solan, HP}
      {Bacherlors of Technology in Computer Science; CGPA: 8.8}{July 2021 - May 2025}
    \resumeSubheading
      {Central Board of Secondary Education }{Patna , Bihar}
      {Class XII PCM Percentage : 82.6}{April 2020 - March 2021
}

  \resumeSubHeadingListEnd



\section{TECHNICAL SKILLS}
\resumeSubHeadingListStart
\begin{itemize}[leftmargin=0.15in, label={}]
    \small{\item{
     \textbf{Languages}{: JavaScript, TypeScript, C++, C, Python} \\
     \textbf{Libraries/Frameworks/Database}{: React, Node , Express, MongoDB,  Redux, Next.js, Prisma, Tailwind CSS , SQL } \\
       \textbf{Tools}{: GitHub, MATLAB, Postman , Firebase}\\
       
    }}
    \resumeSubHeadingListEnd
\end{itemize} 



\section{PROJECTS}
  \resumeSubHeadingListStart

  

\resumeSubheading
    {E-Resume (Professional Profile \&\& Resume Builder)}
    {\textnormal{\normalsize\href{https://github.com/harshraj6582/E-RESUME}{ \underline{\faGithub}}}}
  {\textnormal{\normalsize\href{https://e-resume-green.vercel.app/}{\faGlobe{}\textbf{\underline{Demo Link}}
   }}}



      \resumeItemListStart
      \resumeItem{Developed project with \textbf{Redux Toolkit} for state management, \textbf{TypeScript} for type safety, and \textbf{ReactPDF Renderer} for seamless PDF generation. Technologies used: \textbf{Next.js}, \textbf{Local Storage}, \textbf{PDF.js}, \textbf{Tailwind CSS}.}
     
              
               \vspace{0.5em}

        \resumeItem{Received a GT Metrix performance check result: Total \textbf{Blocking Time} of \textbf{94ms} with an Speed Index of \textbf{659ms }.}
  

\vspace{-1.0em}
 \resumeItem{Integrated \textbf{Local Storage} for convenient access to resumes from anywhere.  }
        
      \resumeItemListEnd
        \resumeSubHeadingListEnd


        \resumeSubheading
    { E-Com (Shopping Platform)}
    {\textnormal{\normalsize\href{https://github.com/harshraj6582/EDU-TECH.git}{ \underline{\faGithub}}}}
  {\textnormal{\normalsize\href{https://edu-techpro.vercel.app/login}{\faGlobe{}\textbf{ \underline{Demo Link}}   }}}



      \resumeItemListStart
     
        \resumeItem{  Leveraged \textbf{MongoDB} as a versatile and scalable database solution, complemented by\textbf{ Redux, Passport.js}, and \textbf{JWT Tokens}, to establish a secure, well-organized, and efficient application structure.}
        \resumeItem{ Implemented \textbf{React Router} seamlessly integrated with \textbf{pagination} and \textbf{sorting} for enhanced user navigation and data organization in the e-commerce platform.

}
        \resumeItem{  Received a GT Metrix performance check result: Fully Loaded Time of 6.0s with an LCP of \textbf{693 }ms. 
         Testing details\textbf{ Email ID: demotesting@gmail.com, Password: Qwerty123}}
        
      \resumeItemListEnd



        \resumeSubheading
    {E-STAY (Full Stack Reservation System)}
    {\textnormal{\normalsize\href{https://github.com/harshraj6582/E-STAY.git}{ \hspace{1.5 cm}\underline{\faGithub}}}}
  {\textnormal{\normalsize\href{https://drive.google.com/file/d/1Bfe0FBDr_C4qoO1NpvvLd9A4HxQ9ZRZw/view}{\faGlobe{}\textbf{\underline{Demo Link}}  }}}



      \resumeItemListStart
     
        \resumeItem{Implemented multi-authentication (\textbf{Credential, Google, Github}),\textbf{ Cloudinary}-powered image upload, and seamless UI enhancements to optimize the hotel booking reservation system. }
        \resumeItem{ \textbf{Advanced Property Search Algorithm}: Engineered dynamic filters for category, date, location, and accommodations, refining property results.
  

}
        \resumeItem{Executed \textbf{Prisma} mastery to optimize \textbf{POST/DELETE} routes, enable direct server-to-database React data fetching, and skillfully managed \textbf{Next.js 13} templates (error.tsx, loading.tsx).}
      \resumeItemListEnd
        \resumeSubHeadingListEnd


      
% -----------Multiple Positions Heading-----------
%    \resumeSubSubheading
%     {Software Engineer I}{Oct 2014 - Sep 2016}
%     \resumeItemListStart
%        \resumeItem{Apache Beam}
%          {Apache Beam is a unified model for defining both batch and streaming data-parallel processing pipelines}
%     \resumeItemListEnd
%    \resumeSubHeadingListEnd
%-------------------------------------------
\resumeSubHeadingListStart

\resumeSubheading
    {StudyNotion (LMS Platform Backend)}
    {\textnormal{\normalsize\href{https://github.com/harshraj6582/Study-Notion_D.git}{ \underline{\faGithub}}}}
  {\textnormal{\normalsize\href{https://github.com/harshraj6582/Study-Notion_D.git}{\faGlobe{}\textbf{\underline{Demo Link}}  }}}



      \resumeItemListStart
     
        \resumeItem{Implemented advanced security measures, including \textbf{JWT token-based authentication}, integrated \textbf{Cookie
 Parser}, and \textbf{OTP validation} . }
        \resumeItem{ Collaborated seamlessly, establishing streamlined communication through \textbf{RESTful API calls}, while engineering
 and developing robust backend functionalities using \textbf{NodeJS} and \textbf{ExpressJS} frameworks
  

}
        \resumeItem{Integrated with \textbf{Razorpay} for payment processing, while ensuring a robust backend capable of supporting over \textbf{200} courses and accommodating multiple instructors, along with an efficient Admin Panel.}
      \resumeItemListEnd
  \resumeSubHeadingListEnd
     \resumeSubHeadingListStart


  \resumeSubHeadingListEnd

  


\section{LEADERSHIP & RECOGNITION}
\begin{itemize}[leftmargin=0.15in, label={}]

    \small{\item{
     \textbf{ Vice President SIAM , JUIT }
     \resumeSubHeadingListStart
     \vspace{-0.5em}
     \resumeItem{•  Organized events, including Vedic Maths, with the participation of more than 200 students  }\resumeItem{•   Worked on 3+ frontend web development projects using React.JS for various events} 
    }
    \resumeSubHeadingListEnd
}
\end{itemize}
%-----------EXPERIENCE-----------


%-----------PROJECTS-----------

%
%-----------PROGRAMMING SKILLS-----------






%-------------------------------------------
\end{document}


