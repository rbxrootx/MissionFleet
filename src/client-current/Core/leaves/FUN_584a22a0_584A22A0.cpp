// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A22A0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_584a22a0_584A22A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 5C FE FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 2]
        push ecx
        ; Exact mapped bytes E8 EF 4F FE FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        mov dl, byte ptr [ebp - 3]
        mov byte ptr [ebp - 1], dl
        mov eax, dword ptr [ebp - 10h]
        push eax
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 F0 FF FF: call 0x584a12f0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        sar edx, 2
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E3 F1 FF FF: call 0x584a14f0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
