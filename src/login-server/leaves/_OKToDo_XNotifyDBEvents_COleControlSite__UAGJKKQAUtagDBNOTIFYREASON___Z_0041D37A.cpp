// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D37A .. +0x5C bytes.
extern "C" __declspec(naked) void _OKToDo_XNotifyDBEvents_COleControlSite__UAGJKKQAUtagDBNOTIFYREASON___Z_0041D37A() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 14h]
        push edi
        mov edi, dword ptr [ebp + 8]
        push 1
        push esi
        push dword ptr [ebp + 10h]
        mov ecx, edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 A2 01 00 00: call 0x41d537
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 37: jl 0x41d3d0
        __asm _emit 0x7c
        __asm _emit 0x37
        mov esi, dword ptr [esi]
        cmp esi, 1eh
        ; Exact mapped bytes 74 2E: je 0x41d3ce
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp esi, 2
        ; Exact mapped bytes 74 29: je 0x41d3ce
        __asm _emit 0x74
        __asm _emit 0x29
        cmp esi, 3
        ; Exact mapped bytes 74 24: je 0x41d3ce
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0ch]
        and eax, 1
        ; Exact mapped bytes 75 0A: jne 0x41d3bc
        __asm _emit 0x75
        __asm _emit 0x0a
        cmp esi, 1
        ; Exact mapped bytes 74 05: je 0x41d3bc
        __asm _emit 0x74
        __asm _emit 0x05
        cmp esi, 14h
        ; Exact mapped bytes 75 12: jne 0x41d3ce
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [edi - 4ch]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x41d3ce
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41d3ce
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        ; Exact mapped bytes EB 02: jmp 0x41d3d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
