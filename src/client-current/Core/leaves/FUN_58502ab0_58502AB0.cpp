// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58502AB0 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58502ab0_58502AB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EE 7C FA FF: call 0x584aa7b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 79 FA FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x79
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 7F D5 FF FF: call 0x58500070
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xd5
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
