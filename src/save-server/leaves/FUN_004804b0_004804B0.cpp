// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004804B0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_004804b0_004804B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        add edx, ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 39: jne 0x480511
        __asm _emit 0x75
        __asm _emit 0x39
        push 11h
        ; Exact mapped bytes E8 D1 03 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 1C: jne 0x480507
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 4]
        add edx, 0ch
        push edx
        ; Exact mapped bytes FF 15 74 B9 68 00: call dword ptr [0x68b974]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        push 11h
        ; Exact mapped bytes E8 42 04 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        lea eax, [edx + ecx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
