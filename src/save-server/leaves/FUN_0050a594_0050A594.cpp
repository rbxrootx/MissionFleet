// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050A594 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_0050a594_0050A594() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 108h
        mov dword ptr [ebp - 108h], ecx
        mov eax, dword ptr [ebp - 108h]
        cmp dword ptr [eax + 0b0h], 0
        ; Exact mapped bytes 75 42: jne 0x50a5f4
        __asm _emit 0x75
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 108h]
        ; Exact mapped bytes E8 C5 AC 00 00: call 0x515286
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        lea edx, [ebp - 104h]
        push edx
        mov ecx, dword ptr [ebp - 108h]
        add ecx, 0cch
        ; Exact mapped bytes E8 F2 BE FC FF: call 0x4d64d0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 108h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 4F 18 FE FF: call 0x4ebe43
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
