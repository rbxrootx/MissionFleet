// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58846100 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_58846100_58846100() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58892cc4h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        sub esp, 104h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 108h], eax
        push 1
        push 4
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FD 40 FF FF: call 0x5883a24a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        and dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        add eax, 4
        mov dword ptr [ebp - 38h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], eax
        mov eax, dword ptr [ebp - 38h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 3ch]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 50h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 44h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 48h], eax
        push dword ptr [ebp - 44h]
        push dword ptr [ebp - 48h]
        push dword ptr [ebp - 4ch]
        push dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 DD 8E FF FF: call 0x5883f094
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 54h], eax
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 2E: jmp 0x588461f9
        __asm _emit 0xeb
        __asm _emit 0x2e
    }
}
