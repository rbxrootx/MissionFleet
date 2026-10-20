// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C7990 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_004c7990_004C7990() {
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
        ; Exact mapped bytes 73 22: jae 0x4c79c1
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
        ; Exact mapped bytes 75 10: jne 0x4c79d1
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 AA 98 FE FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 2E: jmp 0x4c79ff
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 66 9E FF FF: call 0x4c1840
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 26 00 00 00: call 0x4c7a10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D7 9E FF FF: call 0x4c18d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
