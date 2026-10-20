// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850E020 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_5850e020_5850E020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp + 8]
        push edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3E 01 00 00: call 0x5850e180
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 19 57 F9 FF: call 0x584a3770
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 BC 45 F9 FF: call 0x584a2620
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x5850e082
        __asm _emit 0x74
        __asm _emit 0x17
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 8D 46 F9 FF: call 0x584a2700
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 8], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
