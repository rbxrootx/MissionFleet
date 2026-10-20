// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8AB0 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_586c8ab0_586C8AB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0D F3 DB FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 10 90 E3 FF: call 0x58501ae0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x90
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 FA 8F E3 FF: call 0x58501ae0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 8]
        add edx, 8
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        ; Exact mapped bytes E8 E4 8F E3 FF: call 0x58501ae0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x8f
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
