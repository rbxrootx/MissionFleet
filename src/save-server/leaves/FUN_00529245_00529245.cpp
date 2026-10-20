// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00529245 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00529245_00529245() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 24h], ecx
        lea eax, [ebp - 20h]
        push eax
        push 0fh
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 CF 51 F4 FF: call 0x46e430
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x51
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 10h
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 DB F5 FF FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
