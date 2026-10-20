// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438256 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00438256_00438256() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax], 5812f4h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 46: je 0x4382d5
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 19 BD FC FF: call 0x403fb0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xbd
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x4382c6
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 1F 05 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x4382cd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB B4: jmp 0x438289
        __asm _emit 0xeb
        __asm _emit 0xb4
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 00 05 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
