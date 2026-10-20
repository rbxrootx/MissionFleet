// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570A25 .. +0x40 bytes.
extern "C" __declspec(naked) void _OnSetExtent_COleServerItem__UAEHW4tagDVASPECT__ABVCSize___Z_00570A25() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0d1h
        push 5d0930h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 21 A7 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 18: jne 0x570a5d
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], edx
        mov dword ptr [ecx + 24h], eax
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x570a5f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
