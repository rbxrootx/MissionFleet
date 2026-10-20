// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500E40 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_58500e40_58500E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 96 FA FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 96 FA FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 EA F1 FF FF: call 0x58500070
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
