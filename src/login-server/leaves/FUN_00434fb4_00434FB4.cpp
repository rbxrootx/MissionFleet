// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434FB4 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_00434fb4_00434FB4() {
    __asm {
        push ebp
        mov ebp, esp
        lea eax, [ebp + 8]
        push esi
        mov esi, ecx
        push eax
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [esi + 4]
        ; Exact mapped bytes E8 32 91 FF FF: call 0x42e0fb
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x91
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 05: jne 0x434fd4
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 66 7D FF FF: call 0x42cd3a
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x7d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and dword ptr [esi + 0ch], 0
        mov dword ptr [esi + 8], eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
