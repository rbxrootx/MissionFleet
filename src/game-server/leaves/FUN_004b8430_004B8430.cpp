// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8430 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_004b8430_004B8430() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 20 F2 5D 00: cmp eax, dword ptr [0x5df220]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x20
        __asm _emit 0xf2
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 73 22: jae 0x4b8461
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 5df120h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 1B: jne 0x4b847c
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 0A 8E FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 0F 8E FF FF: call 0x4b1280
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 2A: jmp 0x4b84a6
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BB 93 00 00: call 0x4c1840
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1F 00 00 00: call 0x4b84b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 30 94 00 00: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
