// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00483010 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_00483010_00483010() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 DC 8A 68 00: cmp eax, dword ptr [0x688adc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x8a
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 73 22: jae 0x483041
        __asm _emit 0x73
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 8]
        sar ecx, 5
        mov edx, dword ptr [ebp + 8]
        and edx, 1fh
        imul edx, edx, 24h
        mov eax, dword ptr [ecx*4 + 6889a0h]
        ; Exact mapped bytes 0F BE 4C 10 04: movsx ecx, byte ptr [eax + edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x04
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 1B: jne 0x48305c
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 3A A6 FE FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 9
        ; Exact mapped bytes E8 3F A6 FE FF: call 0x46d690
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 0
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 2A: jmp 0x483086
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 4B D4 FF FF: call 0x4804b0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1F 00 00 00: call 0x483090
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C0 D4 FF FF: call 0x480540
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
