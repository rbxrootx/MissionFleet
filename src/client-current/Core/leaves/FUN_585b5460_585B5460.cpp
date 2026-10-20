// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585B5460 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_585b5460_585B5460() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        ; Exact mapped bytes E8 EC F5 EC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        add eax, 24h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 60h]
        ; Exact mapped bytes E8 DB F5 EC FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        shr edx, 0ah
        and edx, 3fffffh
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A 95 FC FF: call 0x5857e9d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x95
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
