// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8FC0 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_004b8fc0_004B8FC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes 83 3D 68 02 5E 00 00: cmp dword ptr [0x5e0268], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 05: jne 0x4b8fd2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 AE 5D FF FF: call 0x4aed80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 A8 04 5E 00: mov eax, dword ptr [0x5e04a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 22h
        ; Exact mapped bytes 75 56: jne 0x4b903c
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 22h
        ; Exact mapped bytes 74 2A: je 0x4b9025
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 1F: je 0x4b9025
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        push eax
        ; Exact mapped bytes E8 6D 90 00 00: call 0x4c2080
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4b9023
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB C1: jmp 0x4b8fe6
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp eax, 22h
        ; Exact mapped bytes 75 09: jne 0x4b903a
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 17: jmp 0x4b9053
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        cmp eax, 20h
        ; Exact mapped bytes 7E 0B: jle 0x4b9053
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB E9: jmp 0x4b903c
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx]
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x4b9075
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        mov dl, byte ptr [ecx]
        cmp edx, 20h
        ; Exact mapped bytes 7F 0B: jg 0x4b9075
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB DE: jmp 0x4b9053
        __asm _emit 0xeb
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
