// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462058 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00462058_00462058() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes E8 F6 18 FA FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 50: je 0x4620ce
        __asm _emit 0x74
        __asm _emit 0x50
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 77 F2 F9 FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x4620c7
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 178h], 0
        ; Exact mapped bytes 75 16: jne 0x4620b4
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        mov ecx, dword ptr [edx + 1ch]
        ; Exact mapped bytes E8 90 27 FA FF: call 0x404840
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x27
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x4620c1
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 24 F2 F9 FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xf2
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 04: jmp 0x4620c5
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0B: jmp 0x4620d0
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes EB C5: jmp 0x46208c
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4620d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 06 67 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x67
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
