// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BF7B0 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_004bf7b0_004BF7B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 30h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 41: jle 0x4bf81b
        __asm _emit 0x7e
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4bf7f8
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x4bf7ff
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 30h
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp - 0ch]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, 1
        mov dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes EB B9: jmp 0x4bf7d4
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 0
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 3D: jl 0x4bf864
        __asm _emit 0x7c
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 35h
        ; Exact mapped bytes 7C 32: jl 0x4bf864
        __asm _emit 0x7c
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 4]
        sub edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 39h
        ; Exact mapped bytes 75 11: jne 0x4bf857
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], 30h
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB E4: jmp 0x4bf83b
        __asm _emit 0xeb
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx]
        add dl, 1
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        cmp edx, 31h
        ; Exact mapped bytes 75 11: jne 0x4bf880
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 4], ecx
        ; Exact mapped bytes EB 26: jmp 0x4bf8a6
        __asm _emit 0xeb
        __asm _emit 0x26
        mov eax, dword ptr [ebp + 8]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 44 9B FE FF: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 ED CF FE FF: call 0x4ac890
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
