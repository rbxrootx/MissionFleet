// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58703200 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_58703200_58703200() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        push 2
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6A 18 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x18
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 8B 0B 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x8b
        __asm _emit 0x0b
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 18 D8 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0xd8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
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
