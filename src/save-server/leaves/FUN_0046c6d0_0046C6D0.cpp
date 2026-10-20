// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046C6D0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_0046c6d0_0046C6D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 83 3D FC 8A 68 00 00: cmp dword ptr [0x688afc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x46c6fa
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 8B 00 00 00: call 0x46c780
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 7F: jmp 0x46c779
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 73 6C: jae 0x46c770
        __asm _emit 0x73
        __asm _emit 0x6c
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes EB 09: jmp 0x46c718
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 32: je 0x46c754
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        add edx, 30h
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [ecx + eax], dl
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp + 8], eax
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB BB: jmp 0x46c70f
        __asm _emit 0xeb
        __asm _emit 0xbb
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        sub ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 09: jmp 0x46c779
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
