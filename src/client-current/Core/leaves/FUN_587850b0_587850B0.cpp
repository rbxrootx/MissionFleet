// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587850B0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_587850b0_587850B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 68h
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3F 29 D0 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x29
        __asm _emit 0xd0
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 00 0E D0 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 68h
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 64h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 18 29 D0 FF: call 0x58487a10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x29
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        push 2
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 59 0C D0 FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0c
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
