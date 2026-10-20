// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048C7A0 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_0048c7a0_0048C7A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax], 581f74h
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 24: jne 0x48c803
        __asm _emit 0x75
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        lea ecx, [eax*4 + 1000h]
        push ecx
        ; Exact mapped bytes E8 CE 0B 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        ; Exact mapped bytes EB 24: jmp 0x48c827
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 1E: jne 0x48c827
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        shl edx, 2
        push edx
        ; Exact mapped bytes E8 A8 0B 06 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x0b
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 94h], 1ch
        push 0
        push 22bh
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 00 00 00: call 0x48c8a2
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 90 BF 01 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xbf
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
