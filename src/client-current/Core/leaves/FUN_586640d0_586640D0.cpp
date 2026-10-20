// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586640D0 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_586640d0_586640D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DF 19 E2 FF: call 0x58485ac0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x19
        __asm _emit 0xe2
        __asm _emit 0xff
        push 4
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 1C E2 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 09 E2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 0ch], ecx
        push 0
        push 64h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
