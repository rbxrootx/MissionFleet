// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432E09 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_00432e09_00432E09() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x432e36
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F 8D 91 00 00 00: jge 0x432edf
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 40004h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 368h
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 6C: je 0x432eda
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        ; Exact mapped bytes 66 8B 84 0A 48 03 00 00: mov ax, word ptr [edx + ecx + 0x348]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 48: jne 0x432eda
        __asm _emit 0x75
        __asm _emit 0x48
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x432ea4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 2E: jge 0x432ed8
        __asm _emit 0x7d
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 40004h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 368h
        mov edx, dword ptr [eax + 4]
        add edx, ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov esi, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 94 72 4A 03 00 00: mov dx, word ptr [edx + esi*2 + 0x34a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x72
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 14 41: mov word ptr [ecx + eax*2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x41
        ; Exact mapped bytes EB C3: jmp 0x432e9b
        __asm _emit 0xeb
        __asm _emit 0xc3
        ; Exact mapped bytes EB 05: jmp 0x432edf
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4E FF FF FF: jmp 0x432e2d
        __asm _emit 0xe9
        __asm _emit 0x4e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
