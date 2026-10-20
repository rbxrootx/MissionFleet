// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10060AB0 .. +0x1B bytes.
extern "C" __declspec(naked) void FUN_10060ab0_10060AB0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7C 10: jl 0x10060ac8
        __asm _emit 0x7c
        __asm _emit 0x10
        ; Exact mapped bytes 83 F8 03: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x03
        ; Exact mapped bytes 7F 0B: jg 0x10060ac8
        __asm _emit 0x7f
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 4C 81 78: mov ecx, dword ptr [ecx + eax*4 + 0x78]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x81
        __asm _emit 0x78
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 8B 01: mov eax, dword ptr [ecx]
        __asm _emit 0x8b
        __asm _emit 0x01
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
