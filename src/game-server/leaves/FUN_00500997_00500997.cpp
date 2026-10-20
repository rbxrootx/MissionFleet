// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500997 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00500997_00500997() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 111h
        push 5cc904h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AF A7 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0D 0D 03 00: call 0x5316c8
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        ; Exact mapped bytes E8 00 0D 03 00: call 0x5316c8
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 F3 0C 03 00: call 0x5316c8
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x0c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 12h], 0
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
