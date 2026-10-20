// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C8070 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_584c8070_584C8070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        xor ecx, ecx
        mov byte ptr [ebp - 1], cl
        lea edx, [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 40 FD FB FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 10h], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 14h], 0fh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 83 FE FB FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0xfb
        __asm _emit 0xff
        nop
        mov byte ptr [ebp - 2], 0
        lea edx, [ebp - 2]
        push edx
        mov eax, 1
        imul ecx, eax, 0
        add ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 19 25 FE FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
