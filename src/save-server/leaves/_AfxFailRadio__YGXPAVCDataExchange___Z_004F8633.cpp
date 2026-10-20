// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F8633 .. +0x7E bytes.
extern "C" __declspec(naked) void _AfxFailRadio__YGXPAVCDataExchange___Z_004F8633() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58caa2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B3 C6 02 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc6
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 0
        push 0f115h
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 33 C5 00 00: call 0x504ba0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f115h
        push 30h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E C7 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 5F E4 FF FF: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C8 40 FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D ED FF FF: call 0x4f73ef
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 4B 42 FD FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x42
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
