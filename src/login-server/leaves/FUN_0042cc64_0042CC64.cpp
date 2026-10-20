// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CC64 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0042cc64_0042CC64() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 84h
        and dword ptr [ebp - 4], 0
        push ecx
        ; Exact mapped bytes E8 0C 36 FF FF: call 0x420283
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 1C: je 0x42cc98
        __asm _emit 0x74
        __asm _emit 0x1c
        push eax
        lea eax, [ebp - 84h]
        push dword ptr [ebp + 0ch]
        push 80h
        push eax
        ; Exact mapped bytes E8 46 3B FF FF: call 0x4207d7
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x42cc9f
        __asm _emit 0x75
        __asm _emit 0x07
        and byte ptr [ebp - 84h], 0
        mov ecx, dword ptr [ebp + 8]
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 6B 0F 00 00: call 0x42dc19
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
