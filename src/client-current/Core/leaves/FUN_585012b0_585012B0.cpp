// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585012B0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_585012b0_585012B0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 1A 00 00: call 0x58502ce0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 F2 5A F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        lea edx, [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 DF 5A F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 CC 5A F8 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0dh], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
