// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500064 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_00500064_00500064() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push 104h
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 50 24 5E 00: call dword ptr [0x5e2450]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 104h
        push 104h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 63 DF FE FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea edx, [ebp - 104h]
        push edx
        ; Exact mapped bytes FF 15 F0 22 5E 00: call dword ptr [0x5e22f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5000b6
        __asm _emit 0x75
        __asm _emit 0x0f
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 47 DA FE FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 73 E0 FE FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
