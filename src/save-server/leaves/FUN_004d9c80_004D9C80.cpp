// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D9C80 .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_004d9c80_004D9C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10ch
        mov dword ptr [ebp - 10ch], ecx
        push 100h
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 9C 00 00 00: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        mov edx, 100h
        sub edx, dword ptr [ebp - 108h]
        cmp edx, 2
        ; Exact mapped bytes 76 20: jbe 0x4d9cda
        __asm _emit 0x76
        __asm _emit 0x20
        lea eax, [ebp - 104h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 D1 2E FF FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [ebp - 108h], 0
        setg al
        ; Exact mapped bytes EB 60: jmp 0x4d9d3a
        __asm _emit 0xeb
        __asm _emit 0x60
        mov dword ptr [ebp - 4], 100h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 100h
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        sub eax, 1
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 95 33 FF FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 33 00 00 00: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 108h], eax
        mov edx, dword ptr [ebp - 4]
        sub edx, dword ptr [ebp - 108h]
        cmp edx, 2
        ; Exact mapped bytes 7E C0: jle 0x4d9ce1
        __asm _emit 0x7e
        __asm _emit 0xc0
        push -1
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes E8 A5 34 FF FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        cmp dword ptr [ebp - 108h], 0
        setg al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
