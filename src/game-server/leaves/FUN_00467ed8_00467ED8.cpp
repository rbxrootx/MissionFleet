// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00467ED8 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_00467ed8_00467ED8() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57bc05h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 18h], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 EA 8F 0C 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8f
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 00 02 00: call 0x487fd7
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        lea edx, [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 5A 74 06 00: call 0x4cf397
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x74
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1dc0h
        ; Exact mapped bytes E8 62 97 0C 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x97
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        add eax, 150h
        mov esi, esp
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 1ddch
        push ecx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 72 08 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 34 90 0C 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esi, esp
        push eax
        mov edx, dword ptr [ebp - 24h]
        add edx, 1df4h
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 50 08 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ecx + 18h]
        sub edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 1e70h], edx
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 1e74h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 18h]
        mov dword ptr [edx + 1e78h], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [edx + 40c78h]
        mov dword ptr [eax + 1e68h], ecx
        mov dword ptr [ebp - 18h], 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 52 58 08 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 CE 07 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
