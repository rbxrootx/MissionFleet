// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58508BF0 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_58508bf0_58508BF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 25h
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 20h
        ; Exact mapped bytes 74 0F: je 0x58508c22
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 2bh
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 10h
        ; Exact mapped bytes 74 0F: je 0x58508c39
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 23h
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax], 2eh
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx], 2ah
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F BE 4D 10: movsx ecx, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x10
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x58508c70
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        mov al, byte ptr [ebp + 10h]
        mov byte ptr [edx], al
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 14h]
        and edx, 3000h
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        and eax, 4
        ; Exact mapped bytes 74 33: je 0x58508cb7
        __asm _emit 0x74
        __asm _emit 0x33
        cmp dword ptr [ebp - 0ch], 2000h
        ; Exact mapped bytes 75 06: jne 0x58508c93
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 46h
        ; Exact mapped bytes EB 22: jmp 0x58508cb5
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp dword ptr [ebp - 0ch], 3000h
        ; Exact mapped bytes 75 06: jne 0x58508ca2
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 41h
        ; Exact mapped bytes EB 13: jmp 0x58508cb5
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp - 0ch], 1000h
        ; Exact mapped bytes 75 06: jne 0x58508cb1
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 45h
        ; Exact mapped bytes EB 04: jmp 0x58508cb5
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 47h
        ; Exact mapped bytes EB 31: jmp 0x58508ce8
        __asm _emit 0xeb
        __asm _emit 0x31
        cmp dword ptr [ebp - 0ch], 2000h
        ; Exact mapped bytes 75 06: jne 0x58508cc6
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 66h
        ; Exact mapped bytes EB 22: jmp 0x58508ce8
        __asm _emit 0xeb
        __asm _emit 0x22
        cmp dword ptr [ebp - 0ch], 3000h
        ; Exact mapped bytes 75 06: jne 0x58508cd5
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 61h
        ; Exact mapped bytes EB 13: jmp 0x58508ce8
        __asm _emit 0xeb
        __asm _emit 0x13
        cmp dword ptr [ebp - 0ch], 1000h
        ; Exact mapped bytes 75 06: jne 0x58508ce4
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 65h
        ; Exact mapped bytes EB 04: jmp 0x58508ce8
        __asm _emit 0xeb
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 67h
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ebp - 1]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov byte ptr [ecx], 0
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
