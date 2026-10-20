// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F403 .. +0x7E bytes.
extern "C" __declspec(naked) void _AfxFailRadio__YGXPAVCDataExchange___Z_0050F403() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d0c2h
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
        ; Exact mapped bytes E8 E3 1A 02 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        push 0
        push 0
        push 0f115h
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 53 C5 00 00: call 0x51b990
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        push 0f115h
        push 30h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 5E 1B 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 2F E4 FF FF: call 0x50d881
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 58 E2 FD FF: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5D ED FF FF: call 0x50e1bf
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DB E3 FD FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xe3
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
