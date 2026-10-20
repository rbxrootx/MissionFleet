// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054BC19 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0054bc19_0054BC19() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F1 1F F1 FF: call 0x45dc23
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1f
        __asm _emit 0xf1
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 17 1F F1 FF: call 0x45db52
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x1f
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
