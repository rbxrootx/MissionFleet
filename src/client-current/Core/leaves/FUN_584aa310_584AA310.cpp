// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA310 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_584aa310_584AA310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DF 8E FF FF: call 0x584a3200
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        xor eax, eax
        mov byte ptr [ebp - 1], al
        lea ecx, [ebp - 1]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 E1 7F FF FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C9 DB FD FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 23 EE FF FF: call 0x584a9170
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 D3 DB FD FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
