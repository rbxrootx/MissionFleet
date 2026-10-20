// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C4C70 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_586c4c70_586C4C70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 228h]
        mov dword ptr [ebp - 8], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 4E 11 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 228h]
        mov dword ptr [ebp - 0ch], ecx
        movzx edx, byte ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 35 12 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x12
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 10h], ecx
        movzx edx, byte ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1B 11 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 14h], ecx
        movzx edx, byte ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 02 12 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x12
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 224h]
        mov dword ptr [ebp - 18h], ecx
        movzx edx, byte ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E8 10 DC FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xdc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 224h]
        mov dword ptr [ebp - 1ch], ecx
        movzx edx, byte ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 CF 11 DC FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x11
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
