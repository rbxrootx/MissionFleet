// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586642A0 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_586642a0_586642A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        push 0dch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 1B E2 FF: call 0x58485e20
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x1b
        __asm _emit 0xe2
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 1C E2 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x1c
        __asm _emit 0xe2
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 86 B2 E3 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb2
        __asm _emit 0xe3
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 1A E2 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1a
        __asm _emit 0xe2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 61 07 E2 FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x07
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 64h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
