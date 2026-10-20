// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C74E0 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_584c74e0_584C74E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BE FD FB FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 75 05: jne 0x584c74ff
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 4D: jmp 0x584c754c
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 0A FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 09 FC FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 EE F9 FB FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 2F FE FF: call 0x584aa480
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x2f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B7 0B 00 00: call 0x584c8100
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
