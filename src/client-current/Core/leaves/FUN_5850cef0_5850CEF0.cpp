// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850CEF0 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_5850cef0_5850CEF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 AE A3 F7 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xa3
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 4
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E FE FF FF: call 0x5850cd50
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 62 F9 FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 18 52 F9 FF: call 0x584a2140
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        push ecx
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB FD FF FF: call 0x5850cd10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
