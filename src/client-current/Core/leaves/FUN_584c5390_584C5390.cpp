// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C5390 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_584c5390_584C5390() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 46 53 FE FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 2F 53 FE FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x53
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 1], 0
        lea eax, [ebp - 1]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 18h]
        add ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 05 52 FE FF: call 0x584aa5e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
