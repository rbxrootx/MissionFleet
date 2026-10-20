// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004115F0 .. +0xA3 bytes.
extern "C" __declspec(naked) void FUN_004115f0_004115F0() {
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
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 46: je 0x411666
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 FD FF FF: call 0x411400
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 1A: je 0x41165d
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
        ; Exact mapped bytes E8 88 71 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x411664
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB B4: jmp 0x41161a
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 0ch], 0
        pop esi
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 51 71 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
