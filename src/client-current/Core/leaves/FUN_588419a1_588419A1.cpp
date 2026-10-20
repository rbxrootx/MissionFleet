// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588419A1 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_588419a1_588419A1() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1008h
        ; Exact mapped bytes E8 42 01 FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 75 02: jne 0x588419c3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5C: jmp 0x58841a1f
        __asm _emit 0xeb
        __asm _emit 0x5c
        ; Exact mapped bytes A0 BF 00 8F 58: mov al, byte ptr [0x588f00bf]
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x8f
        __asm _emit 0x58
        mov byte ptr [ebp - 1004h], al
        push 0fffh
        push 0
        lea eax, [ebp - 1003h]
        push eax
        ; Exact mapped bytes E8 2F B4 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E8 30 0F FF FF: call 0x58832919
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 1008h], eax
        push dword ptr [ebp - 1008h]
        push dword ptr [ebp + 0ch]
        lea eax, [ebp - 1004h]
        push eax
        ; Exact mapped bytes E8 25 52 00 00: call 0x58846c2c
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 1008h], 0
        lea eax, [ebp - 1004h]
        push eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 50 70: call dword ptr [eax + 0x70]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x70
        pop ecx
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 27 F6 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
