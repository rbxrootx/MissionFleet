// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042934B .. +0x172 bytes.
extern "C" __declspec(naked) void FUN_0042934b_0042934B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov esi, esp
        ; Exact mapped bytes FF 15 CC C0 68 00: call dword ptr [0x68c0cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xc0
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 77 BA 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xba
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + 11ch]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x4294ae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 120h]
        imul eax, eax, 3e8h
        xor edx, edx
        div dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 130h]
        shl edx, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx + 134h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 124h]
        imul eax, eax, 3e8h
        xor edx, edx
        div dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 130h]
        shl edx, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx + 138h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 128h]
        imul eax, eax, 3e8h
        xor edx, edx
        div dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 130h]
        shl edx, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx + 13ch], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 12ch]
        imul eax, eax, 3e8h
        xor edx, edx
        div dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 130h]
        shl edx, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + edx + 140h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 120h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 124h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 128h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 12ch], 0
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 11ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 130h]
        add eax, 1
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 130h], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 130h], 0b3h
        ; Exact mapped bytes 7C 0D: jl 0x4294ae
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 130h], 0
        pop esi
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 37 B9 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
