// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867570 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_58867570_58867570() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        lea ecx, [ebp - 10h]
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 51 07 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x07
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x588675a1
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 DD AE FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 0E 9A FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        xor edx, edx
        ; Exact mapped bytes EB 53: jmp 0x588675f4
        __asm _emit 0xeb
        __asm _emit 0x53
        mov ebx, dword ptr [ebp - 8]
        xor edx, edx
        cmp dword ptr [ebx + 8], edx
        ; Exact mapped bytes 75 37: jne 0x588675e2
        __asm _emit 0x75
        __asm _emit 0x37
        push dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 0C 7B FE FF: call 0x5884f0c0
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov edx, eax
        ; Exact mapped bytes EB 3A: jmp 0x588675f4
        __asm _emit 0xeb
        __asm _emit 0x3a
        movzx edi, ax
        mov esi, ecx
        test byte ptr [edi + ebx + 19h], 4
        ; Exact mapped bytes 74 16: je 0x588675dc
        __asm _emit 0x74
        __asm _emit 0x16
        inc ecx
        mov al, byte ptr [ecx]
        test al, al
        ; Exact mapped bytes 74 27: je 0x588675f4
        __asm _emit 0x74
        __asm _emit 0x27
        shl edi, 8
        movzx eax, al
        or edi, eax
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 74 1C: je 0x588675f6
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes EB 05: jmp 0x588675e1
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp dword ptr [ebp + 0ch], edi
        ; Exact mapped bytes 74 09: je 0x588675ea
        __asm _emit 0x74
        __asm _emit 0x09
        inc ecx
        movzx eax, byte ptr [ecx]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 D0: jne 0x588675ba
        __asm _emit 0x75
        __asm _emit 0xd0
        movzx eax, ax
        mov esi, ecx
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 74 02: je 0x588675f6
        __asm _emit 0x74
        __asm _emit 0x02
        mov esi, edx
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x58867606
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
