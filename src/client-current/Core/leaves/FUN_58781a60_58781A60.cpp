// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58781A60 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58781a60_58781A60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 0ch], ecx
        xor eax, eax
        mov byte ptr [ebp - 1], al
        lea ecx, [ebp - 1]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 9C 08 D2 FF: call 0x584a2320
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x08
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 84 64 D0 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0xd0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 00 00 00: call 0x58781b60
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 17 53 D0 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x53
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        push ecx
        ; Exact mapped bytes E8 04 53 D0 FF: call 0x58486dc0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x53
        __asm _emit 0xd0
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        lea ecx, [ebp - 2]
        ; Exact mapped bytes E8 61 64 D0 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x64
        __asm _emit 0xd0
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
