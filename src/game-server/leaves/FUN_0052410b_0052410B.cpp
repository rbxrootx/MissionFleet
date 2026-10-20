// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052410B .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_0052410b_0052410B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B6 CD FC FF: call 0x4f0ed4
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        push 5c8224h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        push ecx
        push 5c8214h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 09 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A5 98 FC FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x98
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 09 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        push 5c823ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        push eax
        push 5c8228h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 09 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CC 0B 01 00: call 0x534d33
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AD 09 01 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
