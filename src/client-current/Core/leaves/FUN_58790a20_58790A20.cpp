// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58790A20 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58790a20_58790A20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E4 64 FF FF: call 0x58786f20
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 68 01 00 00: call 0x58790bb0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CE 64 FF FF: call 0x58786f20
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 61 FF FF: call 0x58786c30
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0fch]
        cmp edx, 1
        ; Exact mapped bytes 75 10: jne 0x58790a7b
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 34h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 0A: jmp 0x58790a85
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0fch], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
